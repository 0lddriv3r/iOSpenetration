//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPHttpReq, NSString;

@interface MidasKeyStore : NSObject
{
    BOOL _updating;
    struct _MidasStuKeyProcessor *_processor;
    NSString *_offerId;
    NSString *_openId;
    int _changeKeyRetryTimes;
    MidasIAPHttpReq *_changeKeyReq;
    id <MidasKeyStoreObserver> _observer;
}

@property(readonly, nonatomic) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic) id <MidasKeyStoreObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)notifyKeyUpdate;
- (void)updateKeyUsingBaseKey:(BOOL)arg1 userInfo:(id)arg2 orderInfo:(id)arg3;
- (void)updateKeyByKeyType:(unsigned int)arg1 userInfo:(id)arg2 orderInfo:(id)arg3;
- (void)readKeysFromLocalPersistence;
- (void)saveKeysToLocalPersistence;
- (void)deleteNewPersistenceFile;
- (void)deleteOldPersistenceFile;
- (BOOL)checkNewKeyPersistenceFileExist;
- (BOOL)checkOldKeyPersistenceFileExist;
- (void)initAllKeys;
- (void *)getProcessor;
- (void)updateKey:(id)arg1 orderInfo:(id)arg2;
- (void)loadKeyByOfferid:(id)arg1 openId:(id)arg2;
- (void)dealloc;
- (id)init;

@end

