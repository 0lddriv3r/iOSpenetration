//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISysCallCheckExt.h"
#import "MMImageLoaderObserver.h"
#import "MonoServiceLogicExt.h"
#import "TXLivePushListener.h"

@class NSString, TXLivePush, UIView;

@interface TXLivePushJSAdapter : NSObject <TXLivePushListener, MMImageLoaderObserver, ISysCallCheckExt, MonoServiceLogicExt>
{
    BOOL _previewing;
    BOOL _bIsMannualPause;
    unsigned char _mode;
    unsigned char _focusMode;
    unsigned char _aspect;
    BOOL _isPublishing;
    BOOL _isPreviewing;
    BOOL _enableCamera;
    BOOL _muted;
    BOOL _backgroundMute;
    BOOL _isDebug;
    BOOL _needEvent;
    BOOL _needNetStatus;
    BOOL _autoPush;
    BOOL _bIsBackgroundInterrupted;
    id <TXLivePushJSAdapterDelegate> _delegate;
    TXLivePush *_txLivePusher;
    unsigned long _pusherId;
    UIView *_previewView;
    NSString *_appId;
    NSString *_pushUrl;
    NSString *_orientation;
    NSString *_audioQuality;
    NSString *_bgImageMd5;
}

@property(retain, nonatomic) NSString *bgImageMd5; // @synthesize bgImageMd5=_bgImageMd5;
@property(nonatomic) BOOL bIsBackgroundInterrupted; // @synthesize bIsBackgroundInterrupted=_bIsBackgroundInterrupted;
@property(nonatomic) BOOL autoPush; // @synthesize autoPush=_autoPush;
@property(nonatomic) BOOL needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) BOOL needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) BOOL isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) BOOL backgroundMute; // @synthesize backgroundMute=_backgroundMute;
@property(nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL enableCamera; // @synthesize enableCamera=_enableCamera;
@property(nonatomic) BOOL isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property(nonatomic) BOOL isPublishing; // @synthesize isPublishing=_isPublishing;
@property(nonatomic) unsigned char aspect; // @synthesize aspect=_aspect;
@property(nonatomic) unsigned char focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) unsigned char mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *audioQuality; // @synthesize audioQuality=_audioQuality;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) unsigned long pusherId; // @synthesize pusherId=_pusherId;
@property(retain, nonatomic) TXLivePush *txLivePusher; // @synthesize txLivePusher=_txLivePusher;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (void)onPushEvent:(int)arg1 withParam:(id)arg2;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)resumeInterruptPush;
- (void)beginInterruptPush:(BOOL)arg1;
- (void)setOrientation;
- (void)enableCamera:(BOOL)arg1;
- (void)stopPush;
- (void)foregroundPush;
- (void)backgroundPush;
- (void)resumePush;
- (void)pausePush;
- (void)startPush;
- (void)parseConfigs:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)operateLivePusherWithType:(id)arg1;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (id)initLivePusherWithId:(unsigned long)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

