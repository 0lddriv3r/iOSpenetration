//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGroupMgrExt.h"
#import "RoomContactSelectDelegate.h"
#import "contactInfoDelegate.h"

@class CContact, NSMutableDictionary, NSString, RoomContactSelectViewController;

@interface DelMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <DelMemLogicDelegate> m_delegate;
    RoomContactSelectViewController *m_vc;
    BOOL m_bNeedReload;
    NSMutableDictionary *m_dicWillDell;
    CContact *_m_oContact;
}

@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <DelMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned long)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)delMember;
- (void)doDelMember;
- (void)updateRightBtn;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
