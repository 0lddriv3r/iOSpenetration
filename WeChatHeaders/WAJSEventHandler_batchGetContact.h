//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAContactMgrExtension.h"

@class MMTimer, NSMutableArray, NSString;

@interface WAJSEventHandler_batchGetContact : WAJSEventHandler_BaseEvent <WAContactMgrExtension>
{
    NSMutableArray *_arrRequestAppId;
    NSMutableArray *_arrResponseContact;
    MMTimer *_contactGetterTimer;
}

@property(retain, nonatomic) MMTimer *contactGetterTimer; // @synthesize contactGetterTimer=_contactGetterTimer;
@property(retain, nonatomic) NSMutableArray *arrResponseContact; // @synthesize arrResponseContact=_arrResponseContact;
@property(retain, nonatomic) NSMutableArray *arrRequestAppId; // @synthesize arrRequestAppId=_arrRequestAppId;
- (void).cxx_destruct;
- (void)onGetContactTimeout;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)asyncBatchUpdateContacts:(id)arg1;
- (void)returnResultWithContactList:(id)arg1;
- (void)getContactFromServerWithAppIdList:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

