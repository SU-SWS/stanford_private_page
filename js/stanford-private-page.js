Drupal.behaviors.stanford_private_page = {
  attach: function(context, settings) {
    (function ($) {
      $(".private-link", context).stanfordPrivatePage({
        spokenText: Drupal.t("Private Page Link")
      });
    })(jQuery);
  }
};
