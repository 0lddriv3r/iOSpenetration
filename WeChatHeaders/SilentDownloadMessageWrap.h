//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface SilentDownloadMessageWrap : NSObject <PBCoding>
{
    NSString *username;
    unsigned long fileSize;
    unsigned long createTime;
    long long mesSvrId;
}

+ (void)initialize;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
@property(nonatomic) unsigned long fileSize; // @synthesize fileSize;
@property(nonatomic) long long mesSvrId; // @synthesize mesSvrId;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

