//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "ILocationMgrExt.h"

@class MMTimer, NSString, UIButton, UIImageView, UILabel;

@interface NetworkCheckViewController : MMWindowViewController <ILocationMgrExt>
{
    UIButton *m_cancelBtn;
    UIImageView *m_iconView;
    UILabel *m_statusLabel;
    UILabel *m_detailLabel;
    UIButton *m_confirmBtn;
    MMTimer *m_progressTimer;
    int m_progressCounter;
    int m_progress;
    int m_progressStep;
    unsigned long m_locationTag;
    BOOL m_connetOK;
    BOOL m_baseNetOK;
    BOOL m_longlinkOK;
    NSString *m_kvString;
}

- (void).cxx_destruct;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long)arg2;
- (void)onCancelBtnClicked;
- (void)dealloc;
- (void)onConfirmBtnClicked;
- (void)updateViewWithStatus:(id)arg1 detail:(id)arg2 hasConfirmBtn:(BOOL)arg3;
- (void)updateForSubmitInfoWithLocation:(id)arg1;
- (void)updateForNetworkFail;
- (void)updateForNetworkOK;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onNetworkCheckFinished:(BOOL)arg1 baseNetOK:(BOOL)arg2 longLinkOK:(BOOL)arg3 kvString:(id)arg4;
- (int)getCheckingProgress;
- (void)updateProgress;
- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;

@end

