//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface DeviceStepItem : MMObject <PBCoding>
{
    unsigned long uiTimeStamp;
    unsigned long uiStep;
}

+ (void)initialize;
@property(nonatomic) unsigned long uiStep; // @synthesize uiStep;
@property(nonatomic) unsigned long uiTimeStamp; // @synthesize uiTimeStamp;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

