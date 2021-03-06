//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MemberDataLogicProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MemberDataLogic : NSObject <MemberDataLogicProtocol>
{
    NSString *m_adminName;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_searchFilterContacts;
    NSMutableArray *m_keyArr;
    NSMutableArray *m_allContacts;
}

- (void).cxx_destruct;
- (id)filtContactsByName:(id)arg1;
- (id)getFilteredContacts;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (id)getItemInSection:(unsigned int)arg1 atRow:(unsigned int)arg2;
- (unsigned int)getSectionItemCount:(unsigned int)arg1;
- (unsigned int)getSectionCount;
- (id)getKeyAtSection:(unsigned int)arg1;
- (id)getKeyArray;
- (void)sortKeys;
- (BOOL)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)reloadMemberList:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)getAllContacts;
- (unsigned int)getTotalCount;
- (void)dealloc;
- (id)initWithMemberList:(id)arg1 admin:(id)arg2;

@end

