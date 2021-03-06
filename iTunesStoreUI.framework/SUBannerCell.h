/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton *_leftButton;
    UIButton *_rightButton;
}


- (void)reloadView;
- (id)_newButton;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_reloadButtons;
- (void)_buttonAction:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end
