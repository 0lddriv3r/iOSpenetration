//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MonoServiceLogicExt.h"
#import "TXLivePlayListener.h"

@class NSString, TXLiveContainerView, TXLivePlayer;

@interface TXLivePlayJSAdapter : NSObject <TXLivePlayListener, MonoServiceLogicExt>
{
    BOOL _bIsMannualPause;
    BOOL _isFullScreen;
    BOOL _muted;
    BOOL _backgroundMute;
    BOOL _isDebug;
    BOOL _needEvent;
    BOOL _needNetStatus;
    BOOL _autoPlay;
    BOOL _bIsBackgroundInterrupted;
    id <TXLivePlayJSAdapterDelegate> _delegate;
    TXLivePlayer *_txLivePlayer;
    TXLiveContainerView *_containerView;
    NSString *_appId;
    unsigned long _playerId;
    NSString *_playUrl;
    int _playType;
    NSString *_orientation;
    int _direction;
    NSString *_objectFit;
    int _mode;
    int _soundMode;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) BOOL bIsBackgroundInterrupted; // @synthesize bIsBackgroundInterrupted=_bIsBackgroundInterrupted;
@property(nonatomic) BOOL autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) BOOL needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) BOOL needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) BOOL isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) BOOL backgroundMute; // @synthesize backgroundMute=_backgroundMute;
@property(nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) int soundMode; // @synthesize soundMode=_soundMode;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) unsigned long playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) TXLiveContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TXLivePlayer *txLivePlayer; // @synthesize txLivePlayer=_txLivePlayer;
@property(nonatomic) __weak id <TXLivePlayJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)onMonoServiceDidEnd;
- (void)removeNotification;
- (void)addNotification;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)activeAudioSession;
- (int)getDirection;
- (void)enterForeground;
- (void)enterBackground;
- (void)disbaleFull;
- (void)enableFull;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)play;
- (void)setAudioRoute;
- (void)setObjectFit;
- (void)setOrientation;
- (void)parseConfigs:(id)arg1;
- (void)operateLivePlayerWithType:(id)arg1 data:(id)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (void)updateContainerViewRect:(struct CGRect)arg1;
- (id)initLivePlayerWithId:(unsigned long)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
