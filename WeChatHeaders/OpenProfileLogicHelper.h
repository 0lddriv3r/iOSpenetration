//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IStrangerContactMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface OpenProfileLogicHelper : MMObject <PBMessageObserverDelegate, IStrangerContactMgrExt>
{
    id <OpenProfileLogicHelperDelegate> _delegate;
    NSString *_ticket;
    int _source;
}

@property(nonatomic) __weak id <OpenProfileLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleOpenProfileResponse:(id)arg1;
- (void)openProfile:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

