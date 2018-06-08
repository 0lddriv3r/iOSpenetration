//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class MMTimer, NSString;

@interface MMResourceCdnDownloaderNotifier : NSObject <ICdnComMgrExt>
{
    id <MMResourceCdnDownloaderNotifierDelegate> _delegate;
    NSString *_identifier;
    MMTimer *_timer;
}

@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MMResourceCdnDownloaderNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTimeout;
- (void)invalidateTimer;
- (void)scheduleTimer;
- (void)OnCdnDownload:(id)arg1;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)notifyWithDownloadInfo:(id)arg1;
- (void)stop;
- (void)startWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

