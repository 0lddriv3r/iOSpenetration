//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "ImageScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAnimationTipView, MMUIViewController, NSMutableDictionary, NSString;

@interface MultiImageScrollView : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate>
{
    NSMutableDictionary *dicVisiblePageIndex;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    MMAnimationTipView *m_tipView;
    BOOL m_bFromPicker;
    BOOL m_bDragAnimating;
    BOOL _m_isFromWebview;
    BOOL _m_needUseWindowFrame;
    id <MultiImageScrollViewDelegate> m_delegate;
    MMUIViewController *m_viewController;
}

@property(nonatomic) BOOL m_needUseWindowFrame; // @synthesize m_needUseWindowFrame=_m_needUseWindowFrame;
@property(nonatomic) BOOL m_isFromWebview; // @synthesize m_isFromWebview=_m_isFromWebview;
@property(nonatomic) BOOL m_bFromPicker; // @synthesize m_bFromPicker;
@property(nonatomic) int m_iCurrentPage; // @synthesize m_iCurrentPage;
@property(nonatomic) int m_iNumberOfPages; // @synthesize m_iNumberOfPages;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController;
@property(nonatomic) __weak id <MultiImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)getPhotoatIndex:(unsigned int)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)changeToPageAtIndex:(unsigned int)arg1;
- (void)setPage:(unsigned long)arg1 atIndex:(unsigned int)arg2;
- (void)updatePageCount:(unsigned long)arg1;
- (unsigned int)imageCount;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)adjustToMinimumScale;
- (void)adjustToNewSize;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForPagingScrollView:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isDisplayingPageForIndex:(unsigned int)arg1;
- (void)tilePages;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initScrollView;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(float)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

