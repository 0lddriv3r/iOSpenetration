//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCAppAuthOpLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCAppAuthOpLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAppAuthOpLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)handleDelResp:(id)arg1;
- (void)handleModResp:(id)arg1;
- (BOOL)deleteApp:(id)arg1 Scene:(unsigned int)arg2;
- (BOOL)modifyApp:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (BOOL)modifyAppAllScope:(id)arg1 Scene:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
