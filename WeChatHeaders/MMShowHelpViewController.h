//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, NSString, UILabel;

@interface MMShowHelpViewController : MMUIViewController <UIAlertViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_userName;
    UILabel *m_labelProduct;
    BOOL m_bFullVersion;
    BOOL m_clearLocalInfo;
}

- (void).cxx_destruct;
- (void)onBack;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateProduct;
- (id)getHeaderView;
- (void)reloadTableData;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearInitMark;
- (void)showRecoverView;
- (void)showUploadStackView;
- (void)showUploadFileView;
- (void)showUploadLogView;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

