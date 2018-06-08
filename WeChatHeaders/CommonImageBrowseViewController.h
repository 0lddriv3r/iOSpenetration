//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImgageBrowseViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAnimationTipView, MMImageBrowseView, NSString, UIImage;

@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate>
{
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
    MMAnimationTipView *m_tipView;
    id m_singleTapOnNav;
    BOOL m_needDeleteAction;
    BOOL m_needActionSheet;
    id <CommonImageBrowserDelegate> m_delegate;
}

@property(nonatomic) __weak id <CommonImageBrowserDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL needActionSheet; // @synthesize needActionSheet=m_needActionSheet;
@property(nonatomic) BOOL needDeleteAction; // @synthesize needDeleteAction=m_needDeleteAction;
@property(retain, nonatomic) id m_singleTapOnNav; // @synthesize m_singleTapOnNav;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initImageView;
- (void)initNavigationBar;
- (void)exitFullScreen;
- (void)setFullScreen:(BOOL)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
