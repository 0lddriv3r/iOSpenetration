//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSData;

@interface WCAppAuthFetchLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCAppAuthFetchLogicDelegate> _delegate;
    NSData *_nextPageData;
    unsigned int _nextPageFlag;
}

@property(nonatomic) unsigned int nextPageFlag; // @synthesize nextPageFlag=_nextPageFlag;
@property(retain, nonatomic) NSData *nextPageData; // @synthesize nextPageData=_nextPageData;
@property(nonatomic) __weak id <WCAppAuthFetchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleFetchResp:(id)arg1;
- (BOOL)isFetchEnd;
- (BOOL)fetchAuthenticatedApps;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
