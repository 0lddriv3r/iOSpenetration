//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAShowOutItemData : MMObject <PBCoding>
{
    NSString *userName;
    unsigned long appType;
    unsigned long appVersion;
    NSString *appId;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) unsigned long appVersion; // @synthesize appVersion;
@property(nonatomic) unsigned long appType; // @synthesize appType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

