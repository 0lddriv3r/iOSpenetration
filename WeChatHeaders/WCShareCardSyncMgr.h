//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class WCShareCardDB;

@interface WCShareCardSyncMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned long long _syncMaxSeq;
    WCShareCardDB *_wcShareCardDB;
    unsigned long _defaultIntervalSeconds;
    unsigned long _lastSyncTime;
    id <WCShareCardSyncMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCShareCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)saveSyncMaxSeq:(unsigned long long)arg1;
- (id)getWCShareCardSyncInfoPath;
- (void)loadSyncSeq;
- (void)reloadSyncKeyBuffer;
- (void)handleShareCardSyncResp:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)doSync;
- (void)doSyncInternal;
- (void)makeSyncCgi;
- (void)clearSyncKey;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

@end
