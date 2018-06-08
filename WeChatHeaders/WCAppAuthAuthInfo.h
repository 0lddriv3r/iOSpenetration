//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface WCAppAuthAuthInfo : MMObject
{
    NSMutableArray *scopes;
    unsigned int allScopeState;
    unsigned int isShowAllscope;
}

+ (void)initialize;
@property(nonatomic) unsigned int isShowAllscope; // @synthesize isShowAllscope;
@property(nonatomic) unsigned int allScopeState; // @synthesize allScopeState;
@property(retain, nonatomic) NSMutableArray *scopes; // @synthesize scopes;
- (void).cxx_destruct;
- (id)getScopeItemByIdentifier:(id)arg1;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopes;
- (void)dealloc;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

