<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

  <div id="page-wrapper"><div><div>

    <div id="navigation">
      <div>
        <div>
          <div id="login">
            <?php
                global $user;
                if ($user->uid != 0) 
                {
                    // code for the logout button
                    if(arg(0)=='user')
                    {
                       echo "<a href=\"/user/logout\">Log out</a>";
                    }
                    else
                    {
                        echo "<a href=\"/user/logout\">Log out</a>";
                    }
                }
                else 
                {
                  echo "<a href=\"?q=members-area\" id=\"login-button\">Log In</a>|";
                  echo "<a href=\"?q=member/register\" id=\"Register-button\">Register</a>";
                }
          ?>
          </div>
         <?php if ($logo): ?>
           <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
           </a>
      <?php endif; ?>
      <?php print render($page['navigation']); ?>
      <div class="clearfix"></div>
        </div>
      </div>
    </div>

    <div id="banner">
      <div id="region-banner">
        <?php if (!drupal_is_front_page())
         {    
        
             $menuParent = menu_get_active_trail();
              //get rid of the last item in the array as it is the current page
              $menuParentPop = array_pop($menuParent);
              //Just grab the last item in the array now
              $menuParent = end($menuParent);
              //if it is not the home page and it is not an empty array
              if(!empty($menuParent) && $menuParent['link_path'] != '' && !(arg(0)=='user' && arg(1)=='password'))
              { 
                if(arg(2)=='board-of-directors' && arg(1)=='add'){?>
                <h1 class="title" id="main-title">Board of Directors</h1>
                <?php } else {?>
                <h1 class="title" id="main-title"><?php print $menuParent['title'] ?></h1>
                <?php }
              } else if(isset($node) && $node->type=='board_of_directors'){?>
                <h1 class="title" id="main-title"><?php echo "Board of Directors" ?></h1>
              <?php } else if(isset($node) && $node->type=='members_pages'){ 
                ?>
                <h1 class="title" id="main-title"><?php echo $node->field_category['und'][0]['taxonomy_term']->name ?></h1>


              <?php  }
              else{?>
              <h1 class="title" id="main-title"><?php print $title ?></h1><?php
              }
         ?> 
        <?php } ?>
         <?php if ($page['Banner']): ?>
           
                <div>
                <?php print render($page['Banner']); ?>
                </div>
             
        <?php endif; ?>
        
      </div>
    </div>

    <div id="header">
      <div>
        <div>
           <?php print render($page['header']); ?>
        </div>
       </div>
    </div> <!-- /#header -->

    <div id="main-wrapper">
      <div>
        <div>
            <?php if ($page['front']): ?>
            <div id="front-region">
              <div>
                <div>
                <?php print render($page['front']); ?>
                <div id="cover"></div>
                </div>
              </div>
            </div> 
            <?php endif; ?>
            <div id="content">
              <div>
               
                      <a id="main-content"></a>
                      <?php print render($title_prefix); ?>
                      <?php print render($title_suffix); ?>
                      <?php print $messages; ?>
                      <?php
                         ?>
                      <?php if(!empty($menuParent) && $menuParent['link_path'] != '' && !(arg(0)=='user' && arg(1)=='password') || (isset($node) && $node->type=='members_pages'))  {?>
                      
                       <h1 class="title" id="page-title"><?php print $title;?></h1>

                      <?php } ?>
                      <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
                      <?php print render($page['help']); ?>
                      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                      <?php print render($page['content']); ?>
                      <?php if (!$user->uid && !(arg(0) == 'user' && !is_numeric(arg(1))) && arg(1)==30) {
                          $block['content'] = drupal_get_form('user_login_block');?>
                          <div id="login-block">
                          <?php print render($block['content']);?>
                      </div>
                      <?php } ?>
                      <?php if (arg(0) == 'user' && arg(1) == 'password') {?>
                          <div id="login-block">
                          <?php     drupal_set_title(t('Request new password'));?>
                         </div>

                      <?php } ?>
                      <?php if (!$user->uid && !(arg(0) == 'user' && !is_numeric(arg(1))) && arg(0)=='members-area') {?>
                          <div id="login-block">
                          <?php     
                             $_GET["destination"] = "members-area";
                               drupal_goto("members-area"); ?>
                        </div>
                      <?php } ?>
                 </div>
              
            </div> <!-- /#content -->

      <?php if ($page['blue-region']): ?>
        <div id="blue-region">
          <div>
            <div>
                <?php print render($page['blue-region']);  
                ?>
            </div>
          </div>
        </div> <!-- /#blue-region -->
      <?php endif; ?>
       <?php if ($page['white-region']): ?>
        <div id="white-region">
          <div>
            <div>
                <?php print render($page['white-region']);  
                ?>
            </div>
          </div>
        </div> <!-- /#white-region-->
      <?php endif; ?>
       
      </div>
    </div></div></div> <!-- /#main, /#main-wrapper -->

    <div id="widgets"><div><div>
      <?php print render($page['widgets']); ?>
    </div></div></div>

    <div id="footer">
      <div>
        <div>
           <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="footer-logo">
                <img src="/sites/all/themes/ICSA/images/footer-logo.png" alt="<?php print t('Home'); ?>" />
           </a>
             <?php print render($page['footer']); ?>
        <div id="copyright">&copy; ICSA <?php print date('Y'); ?><br>
         Site by <a href="http://ccistudios.com" target="_blank">CCI Studios</a></div>
        </div>
      </div>
    </div> <!-- /#footer -->


  </div></div></div> <!-- /#page-wrapper -->
