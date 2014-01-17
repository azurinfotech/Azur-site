(function($) {
	$(document).ready(function() {
		$('.metro-arrow-left').hide();
		$('.metro-arrow-right').click(function(){
			$('.panorama-sections').animate({
				"left":"-500px"
			},300,function(){
				$('.metro-arrow-left').show();
				$('.metro-arrow-right').hide();
			});
		});
		$('.metro-arrow-left').click(function(){
			$('.panorama-sections').animate({
				"left":"0px"
			},300,function(){
				$('.metro-arrow-left').hide();
				$('.metro-arrow-right').show();
			});
		});
		$('.flip').click(function(){
        $(this).find('.card').addClass('flipped').mouseleave(function(){
            $(this).removeClass('flipped');
        });
        return false;
    });
	});
})(jQuery);
