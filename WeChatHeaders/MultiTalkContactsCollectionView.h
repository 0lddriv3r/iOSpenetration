//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MultiTalkContactCellDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSString;

@interface MultiTalkContactsCollectionView : UIView <MultiTalkContactCellDelegate>
{
    BOOL _m_doingAnimation;
    BOOL _m_hasAnimationTodo;
    id <MultiTalkContactsCollectionViewDelegate> m_delegate;
    UIView *m_bigCellBackgroundView;
    UIView *m_bigCellView;
    NSMutableDictionary *_m_contactViewDic;
    NSMutableDictionary *_m_contactViewCacheDic;
    NSMutableArray *_m_takeplaceView;
    MMTimer *_m_waittingTimer;
    int _m_mode;
    NSMutableArray *_m_lastMember;
    NSMutableArray *_m_currentMember;
}

@property(retain, nonatomic) NSMutableArray *m_currentMember; // @synthesize m_currentMember=_m_currentMember;
@property(retain, nonatomic) NSMutableArray *m_lastMember; // @synthesize m_lastMember=_m_lastMember;
@property(nonatomic) int m_mode; // @synthesize m_mode=_m_mode;
@property(nonatomic) BOOL m_hasAnimationTodo; // @synthesize m_hasAnimationTodo=_m_hasAnimationTodo;
@property(nonatomic) BOOL m_doingAnimation; // @synthesize m_doingAnimation=_m_doingAnimation;
@property(retain, nonatomic) MMTimer *m_waittingTimer; // @synthesize m_waittingTimer=_m_waittingTimer;
@property(retain, nonatomic) NSMutableArray *m_takeplaceView; // @synthesize m_takeplaceView=_m_takeplaceView;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewCacheDic; // @synthesize m_contactViewCacheDic=_m_contactViewCacheDic;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewDic; // @synthesize m_contactViewDic=_m_contactViewDic;
@property(retain, nonatomic) UIView *m_bigCellView; // @synthesize m_bigCellView;
@property(retain, nonatomic) UIView *m_bigCellBackgroundView; // @synthesize m_bigCellBackgroundView;
@property(nonatomic) __weak id <MultiTalkContactsCollectionViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)setMultitalkCollectionViewDoingAnimatioin:(BOOL)arg1;
- (BOOL)getMultitalkCollectionViewDoingAnimatioin;
- (void)onClickMultiTalkContactCellBigview;
- (void)checkToShowBigView;
- (void)onClickMultiTalkContactCellWithContact:(id)arg1 render:(id)arg2;
- (id)memberBeforeTalkingAtIndex:(unsigned int)arg1;
- (unsigned int)memberCountBeforeTalking;
- (id)memberInviteMeBeforeTalking;
- (void)checkIfOnePerson;
- (BOOL)isVideoOnForUser:(id)arg1;
- (id)renderForUsername:(id)arg1;
- (void)onTapUser:(id)arg1;
- (id)memberOfIndex:(unsigned int)arg1;
- (unsigned int)totalMemberCount;
- (id)getCellByUserName:(id)arg1 center:(struct CGPoint)arg2;
- (id)getCurrentCellByUserName:(id)arg1;
- (struct CGRect)layoutAtIndex:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (float)alphaAtIndex:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (id)backgroundColorAtIndex:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)initTakeplaceView;
- (void)waittingTimerCheck;
- (void)initWaittingTimer;
- (id)calculateExitUsernameSetWithCurrentSet:(id)arg1;
- (id)calculateCurrentUsernameSet;
- (void)updateCell:(id)arg1 withMember:(id)arg2;
- (void)moveChangeMember;
- (void)placeCellToView;
- (void)removeExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)moveExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)showBusyLabelWithExitUsernameSet:(id)arg1;
- (void)doChangeAnimation;
- (void)doExitAnimationWithExitUsernameSet:(id)arg1;
- (void)updateLastMember;
- (void)updateCurrentMember;
- (void)reloadData;
- (void)changeViewToTalkingMode;
- (void)reloadOtherMemberBeforeTalking;
- (void)reloadViewInviteMeBeforeTalking;
- (void)reloadDataBeforeTalking;
- (void)showView;
- (void)hideView;
- (void)updateDelegate:(id)arg1;
- (void)bigViewTransToCellsView;
- (void)onSingleTap;
- (void)initBigCellView;
- (void)initBigCellBackground;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
