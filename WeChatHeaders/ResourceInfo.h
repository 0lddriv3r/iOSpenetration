//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ResourceInfo : NSObject
{
    float _virtualMemorySize;
    float _residentMemorySize;
    long long _currentCap;
    float _cpuUsage;
}

@property(nonatomic) float _cpuUsage; // @synthesize _cpuUsage;
@property(nonatomic) long long _currentCap; // @synthesize _currentCap;
@property(nonatomic) float residentMemorySize; // @synthesize residentMemorySize=_residentMemorySize;
@property(nonatomic) float virtualMemorySize; // @synthesize virtualMemorySize=_virtualMemorySize;
- (id)init;

@end

