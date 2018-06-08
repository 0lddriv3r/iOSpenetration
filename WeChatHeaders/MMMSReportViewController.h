//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMSBaseViewController.h"

#import "MemoryStatManagerExt.h"

@class MMLoadingView, NSString, UIButton;

@interface MMMSReportViewController : MMMSBaseViewController <MemoryStatManagerExt>
{
    UIButton *m_uploadButton;
    UIButton *m_nextButton;
    MMLoadingView *m_loadingViewX;
}

- (void).cxx_destruct;
- (void)onReportUploadCompleted:(BOOL)arg1 reportType:(int)arg2;
- (void)onReportUploadProgress:(float)arg1;
- (void)onNextButtonClicked:(id)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)startLoadingBlocked;
- (void)layoutNextButton:(int *)arg1;
- (void)layoutUploadButtonAndTips:(int *)arg1;
- (void)layoutViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
