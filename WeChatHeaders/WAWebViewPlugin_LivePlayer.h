//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "TXLivePlayJSAdapterDelegate.h"

@class NSMutableDictionary, NSString;

@interface WAWebViewPlugin_LivePlayer : WAWebViewPlugin_embedView <TXLivePlayJSAdapterDelegate>
{
    struct CGRect _webViewFrame;
    struct CGRect _mainViewFrame;
    struct CGPoint _contentOffset;
    BOOL _statusBarBlack;
    BOOL _scrollEnabled;
    NSMutableDictionary *_playerDic;
}

@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
- (void).cxx_destruct;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)onInsertLogView:(unsigned long)arg1;
- (void)onPlayerEvent:(id)arg1 param:(id)arg2;
- (void)enableFullScreen:(BOOL)arg1 orientation:(int)arg2 playerId:(unsigned long)arg3;
- (void)onPlayNetStatus:(id)arg1 playerId:(unsigned long)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(id)arg2 playerId:(unsigned long)arg3 param:(id)arg4;
- (BOOL)removeLivePlayer:(unsigned long)arg1;
- (void)operateLivePlayer:(unsigned long)arg1 type:(id)arg2 data:(id)arg3;
- (void)updateLivePlayer:(unsigned long)arg1 configs:(id)arg2;
- (void)updateLivePlayer:(unsigned long)arg1 configs:(id)arg2 pos:(struct CGRect)arg3;
- (unsigned long)insertLivePlayer:(unsigned long)arg1 parentId:(unsigned long)arg2 pos:(struct CGRect)arg3 configs:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
