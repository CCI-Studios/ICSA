
(function($) {
    $(function()
    {
      $('#block-block-7 .content a').click(function(e)
      {

        e.preventDefault();
        $('#block-system-main-menu').slideToggle();

      });

      function isMobile()
      {
        if($(window).width()<767)
          return true;
      }

      $(window).resize(function(){

       /* if($(window).width()>767)
        {
            $('#block-system-main-menu li.expanded .submenu').hide();
            $('#block-system-main-menu li.expanded').mouseover(function(){
              $(this).find('ul.menu').show();
               $(this).addClass('close');

            });
            $('#block-system-main-menu li.expanded').mouseleave(function(){
              $(this).find('.submenu').hide();
              $(this).removeClass('close');
            });

            return false;
        }*/
      
      });
  
      $('#block-system-main-menu li.expanded > a').click(function(e)
        { 
              if($(window).width()<767)
              {
                 e.preventDefault();
                $(this).next().slideToggle();
                 $(this).toggleClass('close');
              }
      });
     
    });
   
}(jQuery)); 