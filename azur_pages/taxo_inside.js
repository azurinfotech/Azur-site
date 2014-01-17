(function($) {
	$(document).ready(function() {
		var x = this.URL;
		var y = x.split('#');
		$('#tid'+y[1]).addClass('active');
		$('.taxo-description').each(function(){
			var z = this.id.split('taxo');
			if(y[1] != z[1]){
				$(this).hide();
			}
		});
		$('.icon-option').click(function(){
			$('.active').removeClass('active');
			$(this).addClass('active');
			var a =this.id.split('tid');
			if($('#taxo'+ a[1])[0].style.display == "none"){
				$('.taxo-description').hide();
				$('#taxo' +a[1]).fadeIn(500);
				008641
			}
		});
	});
})(jQuery);