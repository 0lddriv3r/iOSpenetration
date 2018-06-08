//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "StoreEmotionDownloadLogicObjectDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface StoreEmotionDownloadLogicObject : MMObject <StoreEmotionDownloadLogicObjectDelegate>
{
    BOOL _m_isActive;
    NSArray *_serverPids;
    NSMutableArray *_needDownloadPids;
    NSMutableDictionary *_emotionsProgress;
    NSMutableDictionary *_emotionsState;
    id <StoreEmotionDownloadLogicObjectDelegate> _delegate;
    NSMutableArray *_failedArray;
}

@property(retain, nonatomic) NSMutableArray *failedArray; // @synthesize failedArray=_failedArray;
@property(nonatomic) BOOL m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) __weak id <StoreEmotionDownloadLogicObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *emotionsState; // @synthesize emotionsState=_emotionsState;
@property(retain, nonatomic) NSMutableDictionary *emotionsProgress; // @synthesize emotionsProgress=_emotionsProgress;
@property(retain, nonatomic) NSMutableArray *needDownloadPids; // @synthesize needDownloadPids=_needDownloadPids;
@property(retain, nonatomic) NSArray *serverPids; // @synthesize serverPids=_serverPids;
- (void).cxx_destruct;
- (void)onAllEmotionDownloadFinish;
- (void)configEmotionProgressWithProductID:(id)arg1;
- (id)getStoreEmotionList;
- (void)getNeededDownloadStoreEmotionFromServerPids:(id)arg1;
- (void)startInternalLogic;
- (void)downloadServerXMLEmotionWithPid:(id)arg1;
- (BOOL)isActive;
- (void)onStoreEmotionDownloadLogicObjectFailedWithItem:(id)arg1;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (int)getStateWithItem:(id)arg1;
- (float)getDownloadingProgressFromItem:(id)arg1;
- (id)returnDownloadingInfoToMgr;
- (void)startLogicWithPids:(id)arg1;
- (void)startLogic;
- (void)updateServerPids;
- (void)dealloc;
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
