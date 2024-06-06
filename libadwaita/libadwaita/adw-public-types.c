/* This file was generated by gen-public-types.py, do not edit it. */

#include "adw-about-dialog.h"
#include "adw-about-window.h"
#include "adw-action-row.h"
#include "adw-alert-dialog.h"
#include "adw-animation.h"
#include "adw-animation-target.h"
#include "adw-animation-util.h"
#include "adw-application.h"
#include "adw-application-window.h"
#include "adw-avatar.h"
#include "adw-banner.h"
#include "adw-bin.h"
#include "adw-breakpoint.h"
#include "adw-breakpoint-bin.h"
#include "adw-button-content.h"
#include "adw-carousel.h"
#include "adw-carousel-indicator-dots.h"
#include "adw-carousel-indicator-lines.h"
#include "adw-clamp.h"
#include "adw-clamp-layout.h"
#include "adw-clamp-scrollable.h"
#include "adw-combo-row.h"
#include "adw-dialog.h"
#include "adw-easing.h"
#include "adw-entry-row.h"
#include "adw-enum-list-model.h"
#include "adw-expander-row.h"
#include "adw-flap.h"
#include "adw-fold-threshold-policy.h"
#include "adw-header-bar.h"
#include "adw-leaflet.h"
#include "adw-length-unit.h"
#include "adw-main.h"
#include "adw-message-dialog.h"
#include "adw-navigation-direction.h"
#include "adw-navigation-split-view.h"
#include "adw-navigation-view.h"
#include "adw-overlay-split-view.h"
#include "adw-password-entry-row.h"
#include "adw-preferences-dialog.h"
#include "adw-preferences-group.h"
#include "adw-preferences-page.h"
#include "adw-preferences-row.h"
#include "adw-preferences-window.h"
#include "adw-spin-row.h"
#include "adw-split-button.h"
#include "adw-spring-animation.h"
#include "adw-spring-params.h"
#include "adw-squeezer.h"
#include "adw-status-page.h"
#include "adw-style-manager.h"
#include "adw-swipe-tracker.h"
#include "adw-swipeable.h"
#include "adw-switch-row.h"
#include "adw-tab-bar.h"
#include "adw-tab-button.h"
#include "adw-tab-overview.h"
#include "adw-tab-view.h"
#include "adw-timed-animation.h"
#include "adw-toast.h"
#include "adw-toast-overlay.h"
#include "adw-toolbar-view.h"
#include "adw-view-stack.h"
#include "adw-view-switcher.h"
#include "adw-view-switcher-bar.h"
#include "adw-view-switcher-title.h"
#include "adw-window.h"
#include "adw-window-title.h"
#include "adw-version.h"
#include "adw-enums.h"
#include "adw-main-private.h"

void
adw_init_public_types (void)
{
  g_type_ensure (ADW_TYPE_ABOUT_DIALOG);
  g_type_ensure (ADW_TYPE_ABOUT_WINDOW);
  g_type_ensure (ADW_TYPE_ACTION_ROW);
  g_type_ensure (ADW_TYPE_ALERT_DIALOG);
  g_type_ensure (ADW_TYPE_ANIMATION);
  g_type_ensure (ADW_TYPE_ANIMATION_STATE);
  g_type_ensure (ADW_TYPE_ANIMATION_TARGET);
  g_type_ensure (ADW_TYPE_APPLICATION);
  g_type_ensure (ADW_TYPE_APPLICATION_WINDOW);
  g_type_ensure (ADW_TYPE_AVATAR);
  g_type_ensure (ADW_TYPE_BANNER);
  g_type_ensure (ADW_TYPE_BIN);
  g_type_ensure (ADW_TYPE_BREAKPOINT);
  g_type_ensure (ADW_TYPE_BREAKPOINT_BIN);
  g_type_ensure (ADW_TYPE_BREAKPOINT_CONDITION);
  g_type_ensure (ADW_TYPE_BREAKPOINT_CONDITION_LENGTH_TYPE);
  g_type_ensure (ADW_TYPE_BREAKPOINT_CONDITION_RATIO_TYPE);
  g_type_ensure (ADW_TYPE_BUTTON_CONTENT);
  g_type_ensure (ADW_TYPE_CALLBACK_ANIMATION_TARGET);
  g_type_ensure (ADW_TYPE_CAROUSEL);
  g_type_ensure (ADW_TYPE_CAROUSEL_INDICATOR_DOTS);
  g_type_ensure (ADW_TYPE_CAROUSEL_INDICATOR_LINES);
  g_type_ensure (ADW_TYPE_CENTERING_POLICY);
  g_type_ensure (ADW_TYPE_CLAMP);
  g_type_ensure (ADW_TYPE_CLAMP_LAYOUT);
  g_type_ensure (ADW_TYPE_CLAMP_SCROLLABLE);
  g_type_ensure (ADW_TYPE_COLOR_SCHEME);
  g_type_ensure (ADW_TYPE_COMBO_ROW);
  g_type_ensure (ADW_TYPE_DIALOG);
  g_type_ensure (ADW_TYPE_DIALOG_PRESENTATION_MODE);
  g_type_ensure (ADW_TYPE_EASING);
  g_type_ensure (ADW_TYPE_ENTRY_ROW);
  g_type_ensure (ADW_TYPE_ENUM_LIST_ITEM);
  g_type_ensure (ADW_TYPE_ENUM_LIST_MODEL);
  g_type_ensure (ADW_TYPE_EXPANDER_ROW);
  g_type_ensure (ADW_TYPE_FLAP);
  g_type_ensure (ADW_TYPE_FLAP_FOLD_POLICY);
  g_type_ensure (ADW_TYPE_FLAP_TRANSITION_TYPE);
  g_type_ensure (ADW_TYPE_FOLD_THRESHOLD_POLICY);
  g_type_ensure (ADW_TYPE_HEADER_BAR);
  g_type_ensure (ADW_TYPE_LEAFLET);
  g_type_ensure (ADW_TYPE_LEAFLET_PAGE);
  g_type_ensure (ADW_TYPE_LEAFLET_TRANSITION_TYPE);
  g_type_ensure (ADW_TYPE_LENGTH_UNIT);
  g_type_ensure (ADW_TYPE_MESSAGE_DIALOG);
  g_type_ensure (ADW_TYPE_NAVIGATION_DIRECTION);
  g_type_ensure (ADW_TYPE_NAVIGATION_PAGE);
  g_type_ensure (ADW_TYPE_NAVIGATION_SPLIT_VIEW);
  g_type_ensure (ADW_TYPE_NAVIGATION_VIEW);
  g_type_ensure (ADW_TYPE_OVERLAY_SPLIT_VIEW);
  g_type_ensure (ADW_TYPE_PASSWORD_ENTRY_ROW);
  g_type_ensure (ADW_TYPE_PREFERENCES_DIALOG);
  g_type_ensure (ADW_TYPE_PREFERENCES_GROUP);
  g_type_ensure (ADW_TYPE_PREFERENCES_PAGE);
  g_type_ensure (ADW_TYPE_PREFERENCES_ROW);
  g_type_ensure (ADW_TYPE_PREFERENCES_WINDOW);
  g_type_ensure (ADW_TYPE_PROPERTY_ANIMATION_TARGET);
  g_type_ensure (ADW_TYPE_RESPONSE_APPEARANCE);
  g_type_ensure (ADW_TYPE_SPIN_ROW);
  g_type_ensure (ADW_TYPE_SPLIT_BUTTON);
  g_type_ensure (ADW_TYPE_SPRING_ANIMATION);
  g_type_ensure (ADW_TYPE_SPRING_PARAMS);
  g_type_ensure (ADW_TYPE_SQUEEZER);
  g_type_ensure (ADW_TYPE_SQUEEZER_PAGE);
  g_type_ensure (ADW_TYPE_SQUEEZER_TRANSITION_TYPE);
  g_type_ensure (ADW_TYPE_STATUS_PAGE);
  g_type_ensure (ADW_TYPE_STYLE_MANAGER);
  g_type_ensure (ADW_TYPE_SWIPEABLE);
  g_type_ensure (ADW_TYPE_SWIPE_TRACKER);
  g_type_ensure (ADW_TYPE_SWITCH_ROW);
  g_type_ensure (ADW_TYPE_TAB_BAR);
  g_type_ensure (ADW_TYPE_TAB_BUTTON);
  g_type_ensure (ADW_TYPE_TAB_OVERVIEW);
  g_type_ensure (ADW_TYPE_TAB_PAGE);
  g_type_ensure (ADW_TYPE_TAB_VIEW);
  g_type_ensure (ADW_TYPE_TAB_VIEW_SHORTCUTS);
  g_type_ensure (ADW_TYPE_TIMED_ANIMATION);
  g_type_ensure (ADW_TYPE_TOAST);
  g_type_ensure (ADW_TYPE_TOAST_OVERLAY);
  g_type_ensure (ADW_TYPE_TOAST_PRIORITY);
  g_type_ensure (ADW_TYPE_TOOLBAR_STYLE);
  g_type_ensure (ADW_TYPE_TOOLBAR_VIEW);
  g_type_ensure (ADW_TYPE_VIEW_STACK);
  g_type_ensure (ADW_TYPE_VIEW_STACK_PAGE);
  g_type_ensure (ADW_TYPE_VIEW_STACK_PAGES);
  g_type_ensure (ADW_TYPE_VIEW_SWITCHER);
  g_type_ensure (ADW_TYPE_VIEW_SWITCHER_BAR);
  g_type_ensure (ADW_TYPE_VIEW_SWITCHER_POLICY);
  g_type_ensure (ADW_TYPE_VIEW_SWITCHER_TITLE);
  g_type_ensure (ADW_TYPE_WINDOW);
  g_type_ensure (ADW_TYPE_WINDOW_TITLE);
}
