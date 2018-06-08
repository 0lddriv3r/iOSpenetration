//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UIAccelerometerDelegate.h"

@class CMMotionManager, HighpassFilter, NSOperationQueue, NSString;

@interface CShakeChecker : MMObject <UIAccelerometerDelegate>
{
    id <ShakeCheckerDelegate> m_delegate;
    CMMotionManager *m_motionMgr;
    HighpassFilter *m_filter;
    NSOperationQueue *m_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopCheck;
- (void)startCheck;
- (id)init;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

