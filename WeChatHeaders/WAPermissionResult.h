//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAPermissionResult : MMObject
{
    BOOL _needDelayExecute;
    BOOL _resultHasPermission;
    unsigned long _permissionState;
    unsigned long _runningState;
    NSString *_runningStateDescription;
    NSString *_permissionMsg;
    NSString *_resultMsg;
}

+ (id)getFailedResult;
@property(nonatomic) BOOL resultHasPermission; // @synthesize resultHasPermission=_resultHasPermission;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(retain, nonatomic) NSString *permissionMsg; // @synthesize permissionMsg=_permissionMsg;
@property(nonatomic) BOOL needDelayExecute; // @synthesize needDelayExecute=_needDelayExecute;
@property(retain, nonatomic) NSString *runningStateDescription; // @synthesize runningStateDescription=_runningStateDescription;
@property(nonatomic) unsigned long runningState; // @synthesize runningState=_runningState;
@property(nonatomic) unsigned long permissionState; // @synthesize permissionState=_permissionState;
- (void).cxx_destruct;

@end

