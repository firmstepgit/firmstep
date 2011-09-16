<html>
<head>
    <link href="css/template-html.css" type="text/css" rel="stylesheet" />
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
    <title>Template-Html</title>
    <script type="text/javascript">

        $(document).ready(function(){
            $('#main-navigation > li').each(function(){
               var number_of_children = $(this).children('ul').size(), targertUL =$(this).children('ul');
                if(number_of_children!=0){
                    targertUL.hide();
                    $(this).children('a').removeClass('non-drop-down').addClass('drop-down-menu').hover(function(){

                        targertUL.stop().slideDown(200);
                    },function(){
                        targertUL.delay(1000).slideUp(200);
                    });

                }
            });
        });
    </script>
</head>
<body>
<!--page-wrapper (non-footer)-->
<div class="wrapper-page">
<!--header -->
<div class="wrapper-header">
    <div class="inner-header">
        <div class="logo"></div>
    </div>
</div>
<!--end of header -->
<!--navigation -->
<div class="wrapper-navigation">
    <div class="inner-navigation">
        <ul id="main-navigation" class="navigation-menu">
            <li><a href="#" class="non-drop-down">home</a></li>
            <li><a href="#" class="non-drop-down">dashboard</a></li>
            <li><a href="#" class="non-drop-down">citizen</a>
                <ul>
                    <li><a href="#">customer index</a></li>
                    <li><a href="#">cautionary contact</a></li>
                </ul>
            </li>
            <li><a href="#" class="non-drop-down">admin options</a></li>
            <li><a href="#" class="contact-finder">contact finder</a></li>
            <li><a href="#" class="faq-link">faq</a></li>
        </ul>
    </div>
</div>
<!--end of navigation -->
<!--main content -->
<div class="wrapper-content">
    <div class="inner-content">
        <!--LEFT PANEL and RIGHT panel just for display, will be handled by Drupal -->
        <div class="left-panel"></div>
        <div class="right-panel"></div>
    </div>
</div>
<!--end of main content -->
<div class="push">

</div>
</div>
<!-- end page-wrapper (non-footer)-->
<!--footer-->
<div class="wrapper-footer">
    <div class="inner-footer">
        <div class="powered-by-firmstep"></div>
        Web Portals by Firmstep &copy; 2009-2011. All rights reserved | <a href="#">Terms & Conditions</a> | <a href="#">Privacy</a>
    </div>
</div>
<!--end of footer-->
</body>
</html>