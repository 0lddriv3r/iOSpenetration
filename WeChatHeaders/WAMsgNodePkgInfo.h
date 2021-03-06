//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAMsgNodePkgInfo : NSObject <PBCoding>
{
    NSString *appId;
    unsigned int debugMode;
    NSString *checksum;
    NSString *debugPkgUrl;
    unsigned int scene;
    unsigned long long version;
}

+ (void)initialize;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *debugPkgUrl; // @synthesize debugPkgUrl;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum;
@property(nonatomic) unsigned long long version; // @synthesize version;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

