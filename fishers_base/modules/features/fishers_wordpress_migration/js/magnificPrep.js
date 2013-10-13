/*
 * This script adds magnific popups to media_gallery images.
 */
(function ($) {
  Drupal.behaviors.fishersWordpressMigrationMagnific = {
    attach: function (context, settings) {
      $('.media-gallery-thumb', context).magnificPopup({
        type: 'ajax',
        gallery: {
          enabled: true // set to true to enable gallery
        },
        callbacks: {
          parseAjax: function(mfpResponse) {
            mfpResponse.data = $(mfpResponse.data).find('#content');
            $('.media-gallery-detail-info', mfpResponse.data).hide();
          }
        }

      });
    }
  };

})(jQuery);