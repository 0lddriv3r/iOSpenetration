//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonBackUpMgrExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface CustomEmoticonSynchronizeView : MMUIView <EmoticonBackUpMgrExt, UIAlertViewDelegate>
{
    BOOL m_lastTimeAnimating;
    BOOL _m_firstEnterWithoutWiFi;
    UIButton *m_pauseButton;
    UIButton *m_startButton;
    UIButton *m_editButton;
    UIButton *m_closeButton;
    UIImageView *m_cloudImageView;
    UIImageView *m_cloudStatusImageView;
    UILabel *m_synchronizeStatusLabel;
    UILabel *m_networkStatusLabel;
    id <CustomEmoticonSynchronizeViewDelegate> _m_delegate;
    unsigned int _m_localEmoticonLimit;
}

@property(nonatomic) unsigned int m_localEmoticonLimit; // @synthesize m_localEmoticonLimit=_m_localEmoticonLimit;
@property(nonatomic) BOOL m_firstEnterWithoutWiFi; // @synthesize m_firstEnterWithoutWiFi=_m_firstEnterWithoutWiFi;
@property(nonatomic) __weak id <CustomEmoticonSynchronizeViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_lastTimeAnimating; // @synthesize m_lastTimeAnimating;
@property(retain, nonatomic) UILabel *m_networkStatusLabel; // @synthesize m_networkStatusLabel;
@property(retain, nonatomic) UILabel *m_synchronizeStatusLabel; // @synthesize m_synchronizeStatusLabel;
@property(retain, nonatomic) UIImageView *m_cloudStatusImageView; // @synthesize m_cloudStatusImageView;
@property(retain, nonatomic) UIImageView *m_cloudImageView; // @synthesize m_cloudImageView;
@property(retain, nonatomic) UIButton *m_closeButton; // @synthesize m_closeButton;
@property(retain, nonatomic) UIButton *m_editButton; // @synthesize m_editButton;
@property(retain, nonatomic) UIButton *m_startButton; // @synthesize m_startButton;
@property(retain, nonatomic) UIButton *m_pauseButton; // @synthesize m_pauseButton;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onEmoticonBackUpMgrSyncOperate;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachable;
- (void)onEmoticonBackUpMgrRecoverAutoPauseOnWWan;
- (void)onEmoticonBackUpMgrRecoverGoon;
- (void)onEmoticonBackUpMgrRecoverPause;
- (void)onEmoticonBackUpMgrRecoverFailed;
- (void)onEmoticonBackUpMgrRecoverComplete;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (BOOL)isReachable;
- (BOOL)isOnWifi;
- (unsigned int)getCurrentEmoticonCount;
- (BOOL)isRecoveringComplete;
- (BOOL)isRecoveringBeenPause;
- (BOOL)isRecovering;
- (void)layoutSubviews;
- (void)updateNetworkLabelTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)updateSynchronizeLabelTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)updateCloudImageViewTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)updateCloseButtonTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)onClickClose;
- (void)updateEditButtonTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)onClickEdit;
- (void)updateStartButtonTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)onClickStart;
- (void)updatePauseButtonTotalCount:(unsigned int)arg1 CompleteCount:(unsigned int)arg2;
- (void)onClickPause;
- (void)updateView;
- (void)onBecomeActive;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

