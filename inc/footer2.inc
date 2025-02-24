
<br>


  



		<?
		if ($stranica == "index")
		{
		echo "&nbsp;";
		}
		else
		{
		include ('down-rubriki.inc');
		}
		?>




</div>
		</div>
		
		<footer class="footer clear">
			<div class="footer_left">
			<p>&copy; 2011—<?php echo date('Y'); ?> <a href="/">Проект «Доступно о финансах»</a> <br>



	<a href="mailto:admin@landshaftagreg.ru">Обратная связь</a> | <a href="/sitemap.html">Карта сайта</a> | <a href="/ad/">Реклама на сайте</a><br>
	При использовании материалов данного сайта гиперссылка на сайт обязательна</p></div>
			<div class="footer_right">

		<?
		if ($metka == "mycounter")
		{
		include ('mycounter.inc');
		}
		else
		{
		echo "&nbsp;";
		}
		?>

	
			</div>
		</footer>
		
	</div>

<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-5998499-4']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
	<script type="text/javascript" src="/js/adaptive.js"></script>
</body>
</html>
  
  
  