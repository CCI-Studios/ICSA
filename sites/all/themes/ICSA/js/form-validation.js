
(function($) {
    $(function()
    {


    $(".webform-client-form-28 .form-submit").click(validation_contact);
    function validation_contact()
    {
      var email = $(".webform-client-form-28 .webform-component--email-address input").val();
    
      var emailReg = new RegExp(/^(("[\w-\s]+")|([\w-]+(?:\.[\w-]+)*)|("[\w-\s]+")([\w-]+(?:\.[\w-]+)*))(@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$)|(@\[?((25[0-5]\.|2[0-4][0-9]\.|1[0-9]{2}\.|[0-9]{1,2}\.))((25[0-5]|2[0-4][0-9]|1[0-9]{2}|[0-9]{1,2})\.){2}(25[0-5]|2[0-4][0-9]|1[0-9]{2}|[0-9]{1,2})\]?$)/i);
      var valid = emailReg.test(email);
    

      if(!valid)
       {  
         $('.webform-component--email-address input').focus();
         var div="<div id=\"error\"><p>Please fill email field correctly</p></div>"
         $('#error').remove();
         $('.webform-client-form-28').append(div);
         return false;
       }
       else
       {
        console.log('true');
        return true;
       }
  
    }
     
    });
   
}(jQuery)); 