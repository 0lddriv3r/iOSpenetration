//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CMessageWrap;

@interface BaseChatViewModel : NSObject
{
    CBaseContact *m_chatContact;
    float m_layoutWidth;
    float m_cachedHeight;
    id m_cellView;
    int _modelType;
    unsigned int _splitPosition;
    id <ChatViewModelDelegate> _delegate;
    double _createTime;
}

@property(nonatomic) __weak id <ChatViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int splitPosition; // @synthesize splitPosition=_splitPosition;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
@property(retain, nonatomic) CBaseContact *chatContact; // @synthesize chatContact=m_chatContact;
- (void).cxx_destruct;
- (BOOL)isDisableEditMode;
- (BOOL)isTailPart;
- (BOOL)isHeadPart;
- (id)cellDataForRow:(unsigned int)arg1;
- (int)numberOfRowsInSection;
- (void)updateLayouts;
- (void)resetLayoutCache;
- (struct CGSize)measure:(struct CGSize)arg1;
- (float)rowHeight;
- (BOOL)shouldLayoutIfNeeded;
- (float)sectionHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (void)updateChatContact:(id)arg1;
- (id)initWithChatContact:(id)arg1;
@property(readonly, nonatomic) CMessageWrap *messageWrap;
@property(nonatomic) __weak id cellView;

@end
