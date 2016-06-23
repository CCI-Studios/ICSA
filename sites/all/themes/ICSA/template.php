<?php 


function icsa_form_alter(&$variables, $form_state, $form_id) {
  
  if($form_id=='user_login_block')
  {

         // Add a custom placeholder to username field.
    $variables['name']['#title']=t('Enter your Username or Email');
    $variables['name']['#attributes']['placeholder']=t('Username or Email');
    
    $variables['pass']['#attributes']['placeholder']=t('Password');
  
  
    $variables['actions']['submit']['#value'] = t('Log In');

    $variables['actions']['Find Id/Password'] = array(
          '#markup' => l(t('Find Id/Password'), 'user/password', array('attributes' => array('title' => t('Cancel'),'class' => t('button')))),
          '#weight' => '210'
          );
      
    if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) 
    {
      $markup = l(t('Register'), 'member/register', array('attributes' => array('title' => t('Register'))));
    }

    $markup = '<div class="button">' . $markup . '</div>';
    $variables['links']['#markup'] = $markup;

    $variables['#validate'][] = 'login_val';
  }



  if($form_id=='members_pages_node_form')
  {      
       function removeUrlSpace($string)
       {
          //Lower case everything
          $string = strtolower($string);
          //Convert whitespaces and underscore to dash
          $string = preg_replace("/-/"," ", $string);
          return $string;
       }
      

        $pgtitle=arg(3);
        $pgtitle=removeUrlSpace($pgtitle);
        drupal_set_title($pgtitle);

        $variables['actions']['cancel'] = array(
        '#markup' => l(t('Cancel'), '/', array('attributes' => array('title' => t('Cancel'),'class' => t('button')))),
        '#weight' => '210'
        );

        $variables['actions']['list'] = array(
        '#markup' => l(t('List'), 'members-area/'.arg(3), array('attributes' => array('title' => t('List'),'class' => t('button')))),
        '#weight' => '200'
        );

        $variables['actions']['submit']['#weight'] = 205;
        unset($variables['actions']['preview']);

  }

  if($form_id=='user_pass')
  { 

    $variables['#submit'][] = 'abc';
  }

 

  if($form_id=='user_register_form')
  { 

    $variables['account']['name']['#attributes']['placeholder']=t('Username');
    $variables['account']['pass']['#process'] = array('form_process_password_confirm', 'register_alter_password_confirm');
    $variables['account']['mail']['#attributes']['placeholder']=t('Email');
    $variables['profile_main']['field_organization']['und'][0]['value']['#attributes']['placeholder']=t('organization');
    $variables['profile_main']['field_nationality']['und']['#attributes']['placeholder']=t('organization');
    $variables['profile_main']['field_cell_phone']['und'][0]['value']['#attributes']['placeholder']=t('Cellphone');
    $variables['profile_main']['field_office_phone']['und'][0]['value']['#attributes']['placeholder']=t('Officephone');
    $variables['profile_main']['field_fax']['und'][0]['value']['#attributes']['placeholder']=t('Fax');
    $variables['account']['mail']['#attributes']['placeholder']=t('Email');
    $variables['actions']['submit']['#value'] = t('Register Now');
    $variables['actions']['submit']['#weight'] = 10;
   
    // Remove the "Username" & "Password" labels from the form.
    unset($variables['account']['name']['#title']);
    unset($variables['account']['pass']['#title']);
    unset($variables['account']['mail']['#title']);
    unset($variables['profile_main']['field_organization']['und'][0]['value']['#title']);
    unset($variables['profile_main']['field_cell_phone']['und'][0]['value']['#title']);
    unset($variables['profile_main']['field_office_phone']['und'][0]['value']['#title']);
    unset($variables['profile_main']['field_fax']['und'][0]['value']['#title']);
    unset($variables['profile_main']['field_nationality']['und']['#title']);


    $variables['profile_main']['field_nationality']['und']['#options']['0'] = t('Nationality'); 
    $variables['profile_main']['field_nationality']['und']['#empty_option'] = 'Nationality';

    $variables['actions']['cancel'] = array(
          '#markup' => l(t('Cancel'), '/', array('attributes' => array('title' => t('Cancel'),'class' => t('button')))),
          '#weight' => '210'
          );

    // Change the text on the submit button, use CSS to make it an image if you would like
  }

  if (arg(0) == 'user' && arg(1) == 'register') {
    drupal_set_title(t('Create new account'));
  }
  elseif (arg(0) == 'user' && arg(1) == 'password') {
    drupal_set_title(t('Request new password'));
  }
  elseif (arg(0) == 'user' && arg(1) == 'login') {
    drupal_set_title(t('Log in'));
  }
  elseif (arg(0) == 'user' && arg(1) == '') {
    drupal_set_title(t('Log in'));
  }
}

function icsa_menu_link(array $variables) 
{
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . '<div class = "submenu">'. $sub_menu . "</div></li>\n";
}


function abc($form, &$form_state)
{

  $emailAddress =  $form_state['values']['name'];

  $to = "info@icsa.com";
  
  $email_from = "info@icsa.com"; 
 
  $params['var'] = $emailAddress;
  $sent = drupal_mail('myMessageName', 'key', $to, language_default(), $params, $email_from, TRUE);
}
    
function myMessageName_mail($key, &$message, $params)
{
    $language = $message['language'];
    switch($key) {
    //switching on $key lets you create variations of the email based on the $key parameter
    case 'key':
    $message['subject'] = t('Password request'); //$vars required even if not used to get $language in there
    //the email body is here, inside the $message array
    $message['body'][] = 'This is the password request from '.$params['var'].'. Please reset the requested user password';
    break;
    }
}

function register_alter_password_confirm($element) 
{
    $element['pass1']['#title_display'] = "invisible";
    $element['pass1']['#attributes']['placeholder'] = t("Password");
    $element['pass2']['#title_display'] = "invisible";
    $element['pass2']['#attributes']['placeholder'] = t("Confirm password");
    return $element;
}

function login_val($form, &$form_state) 
{

    global $user;
    echo $user->uid; 
    if (empty($form_state["uid"]))
    {
        $_GET["destination"] = "members-area";
        drupal_goto("members-area"); 
    }
}

?>    

