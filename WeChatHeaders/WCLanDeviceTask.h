//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCLanDeviceTask : NSObject
{
    NSString *m_deviceType;
    NSString *m_deviceId;
    int m_subTaskId;
    long long m_taskId;
    long long m_taskCmd;
}

@property(nonatomic) int m_subTaskId; // @synthesize m_subTaskId;
@property(nonatomic) long long m_taskCmd; // @synthesize m_taskCmd;
@property(nonatomic) long long m_taskId; // @synthesize m_taskId;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
- (void).cxx_destruct;

@end

