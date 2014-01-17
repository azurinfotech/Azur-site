(function($) {
	$(document).ready(function() {
		$('.side-panel').hide();
		$('.metro .tile').click(function() {
			if (($('.side-panel').is(":visible"))) {
				$('.side-panel').animate({
					"right" : "-300px"
				}, 300);
			}
			var x = $(this);
			var y = x[0].hash;
			$(y).show();
			$(y).animate({
				"right" : "0px"
			}, 300);
		});
		$('.button-filter').click(function() {
			$('.side-panel').animate({
					"right" : "-300px"
				}, 300);
			var flag = 0;
			var id = new Array;
			$('.side-panel .filter').each(function() {
				if (this.firstChild.checked) {
					id[flag] = this.firstChild.className;
					flag = flag + 1;
				}
			});
			$('.case').each(function() {
				var b = this.classList[1].split('-');
				var case_show = false;
				for (x in id) {
					for (y in b) {
						if (id[x] == b[y]) {
							case_show = true;
							break;
						}
					}
				}
				if (case_show && this.hidden) {
					this.hidden = false;
				} else if (!(this.hidden) && !(case_show)) {
					this.hidden = true;
				}
			});
		});
	});
})(jQuery);
