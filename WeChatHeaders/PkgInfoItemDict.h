//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface PkgInfoItemDict : NSObject <PBCoding>
{
    NSMutableDictionary *dictDebugMode2PkgInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dictDebugMode2PkgInfo; // @synthesize dictDebugMode2PkgInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

