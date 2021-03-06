//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTextEditDelegate.h"
#import "IFavoritesExt.h"
#import "ILinkEventExt.h"
#import "RichTextLayoutDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavForwardLogicController, MMAnimationTipView, NSString, RichTextView;

@interface FavTextDetailViewController : FavBaseDetailViewController <RichTextLayoutDelegate, ILinkEventExt, IFavoritesExt, FavTextEditDelegate, FavForwardLogicDelegate, WCActionSheetDelegate>
{
    RichTextView *m_textLabel;
    NSString *m_nsText;
    NSString *m_copyedText;
    FavForwardLogicController *m_favForwardController;
    MMAnimationTipView *m_tipView;
    float m_cacheTextHeight;
    float m_cacheWidth;
}

- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)onFavTextEditOK:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopy:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onAction:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (float)getHeightForRowAtIndexPath:(id)arg1;
- (int)getRowsInContentSection;
- (void)updateViewWithFavItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initTextLabel;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)shouldOpenNewLineAtY:(float)arg1 withLineHeight:(float)arg2 richTextView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

