
(function($) {
    $(function(){
       		
       $('.field-type-country, .field-name-field-organization, .field-name-field-cell-phone, .field-name-field-office-phone, .field-name-field-fax').wrapAll('<div class="container"></div>');

      

		   $('.block > h2,#page-title, #content h1').not('#block-user-login h2').each(function() 
       {
           var word = $(this).html();
           var index = word.indexOf(' ');
           var wl = word.split(' ');
           if(index == -1) {
              index = word.length;
           }

           if(wl.length > 1)
           {
             $(this).html('<span class="first-word">' + word.substring(0, word.lastIndexOf(" ")) + '</span> ' + word.substring(word.lastIndexOf(" ") + 1));

           }
           if(wl.length == 1)
           {
             $(this).html('<span class="single-word">' + word.substring(0, index) + '</span>');
           }
        });

       $('#block-user-login h2').each(function() 
       {
           var word = $(this).html();
           var index = word.indexOf(' ');
           var wl = word.split(' ');
           if(index == -1) {
              index = word.length;
           }

           if(wl.length > 1)
           {
             $(this).html('<span class="first-word">' + word.substring(0, index) + '</span> ' + word.substring(index + 1));

           }
           if(wl.length == 1)
           {
             $(this).html('<span class="single-word">' + word.substring(0, index) + '</span>');
           }
        });

       $('#user-pass input').attr('placeholder','Email Address')


		   $('#login #login-button').click(function(e){

		   		
          if($(window).width()>767)
          { 
            e.preventDefault();
            $('#block-user-login').show();
            $('#cover').show();
          }
		   		
		   });

       $('#block-user-login h2').append('<span id="cross">Cross</span>');
       $('#cross').click(function(){

        $('#block-user-login').fadeOut();
        $('#cover').fadeOut();

       });


       $('#block-user-login div.button').insertAfter('#block-user-login .form-actions');
       $('#login-block div.button').insertAfter('#login-block .form-actions');


       $('.form-item-pass-pass1').append('<div><p> Password must be between 8 and 20 characters in length and contain letters, numbers, and special characters(!@#$%^&*()_+-).</p></div>');
       $("#user-register-form .form-submit").click(validPassword);

        function validPassword()
        { 

           var password = $("#user-register-form #edit-pass-pass1").val();
          var re = /^(?=.*[a-zA-Z])(?=.*\d)(?=.*[!@#$%^&*()_+-])[A-Za-z\d][A-Za-z\d!@#$%^&*()_+-]{8,20}$/;
          var valid = re.test(password);

          if(!valid)
          {  
            $('.password-field input').focus();
            var div="<div id=\"error\"><p>Please fill password field correctly</p></div>"
            $('#error').remove();
            $('#user-register-form').append(div);
            return false;
          }
          else
          {
            console.log('true');
            return true;
          }
        }

        $.urlParam = function(name)
        {
            var results = new RegExp('[\?&]' + name + '=([^&#]*)').exec(window.location.href);
            if (results==null){
               return null;
            }
            else{
               return results[1] || 0;
            }
        }

        $('#edit-field-category-und option[value=' + $.urlParam('tid') + ']')
        .attr('selected',true);
        $('.form-item-field-category-und').addClass('element-invisible');

       $('.field-name-field-executive-director-or-pres,.field-name-field-address,.field-name-field-phone-number,.field-name-field-fax-mem, .field-name-field-url').wrapAll('<div></div>');

       $('.field-name-field-file-members .file a').attr('target','_blank');

       $(document).mouseup(function (e)
        { 
          var container =$('#block-user-login');
          if (!container.is(e.target)
                    && container.has(e.target).length === 0) 
                {
                    container.fadeOut();
                    $('#cover').fadeOut();
                }
        });

    });
   
}(jQuery)); 