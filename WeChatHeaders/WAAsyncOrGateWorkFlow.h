//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWorkFlowBase.h"

@interface WAAsyncOrGateWorkFlow : WAWorkFlowBase
{
}

- (id)allStepInfoError;
- (BOOL)isAllStepFail;
- (void)onStepFinish:(id)arg1 isSuccess:(BOOL)arg2 error:(id)arg3;
- (void)runSteps;

@end

