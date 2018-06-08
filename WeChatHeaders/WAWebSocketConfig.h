//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WANetworkConfigBase.h"

#import "WANetworkConfigBaseDataSource.h"

@class NSString;

@interface WAWebSocketConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    unsigned long _webSocketMaxConcurrentCount;
}

@property(nonatomic) unsigned long webSocketMaxConcurrentCount; // @synthesize webSocketMaxConcurrentCount=_webSocketMaxConcurrentCount;
- (unsigned long)configDefaultTimeoutMS;
- (unsigned long)configTimeoutMS;
- (unsigned long)configMaxTimeoutMS;
- (id)configDomainList;
- (void)loadConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
