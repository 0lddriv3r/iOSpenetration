//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSMutableArray, NSString, UIFont;

@interface TextMessageViewModel : CommonMessageViewModel
{
    NSMutableArray *m_subViewModels;
    float m_labelWidth;
    NSString *m_contentText;
    NSString *m_contentPatternText;
    float m_contentTextFontLineHeight;
    int m_parserType;
    struct CGSize m_contentTextSize;
    struct CGSize m_translatedTextSize;
    NSMutableArray *m_contentTextStyles;
    NSMutableArray *m_translateTextStyles;
    BOOL m_isLongSplitMsg;
    NSMutableArray *_translateTextStyles;
    float _translatedLineY;
    float _contentMidY;
    NSMutableArray *_originContentTextStyles;
    float _contentHeight;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSMutableArray *originContentTextStyles; // @synthesize originContentTextStyles=_originContentTextStyles;
@property(nonatomic) float contentMidY; // @synthesize contentMidY=_contentMidY;
@property(nonatomic) float translatedLineY; // @synthesize translatedLineY=_translatedLineY;
@property(retain, nonatomic) NSMutableArray *translateTextStyles; // @synthesize translateTextStyles=_translateTextStyles;
@property(retain, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=m_contentTextStyles;
@property(nonatomic) struct CGSize translatedTextSize; // @synthesize translatedTextSize=m_translatedTextSize;
@property(nonatomic) struct CGSize contentTextSize; // @synthesize contentTextSize=m_contentTextSize;
@property(readonly, nonatomic) float contentTextFontLineHeight; // @synthesize contentTextFontLineHeight=m_contentTextFontLineHeight;
- (void).cxx_destruct;
- (void)adjustTableOffset:(struct CGRect)arg1 delayForReloadTable:(BOOL)arg2;
- (struct CGRect)getInputToolViewFrame;
- (id)getMsgTableView;
- (struct CGRect)realFrameByCurFrame:(struct CGRect)arg1;
- (void)setLinkHighlighted:(BOOL)arg1 url:(id)arg2;
- (id)translateInfo;
- (BOOL)canShowTranslateView;
- (BOOL)canShowTranslatedText;
@property(readonly, nonatomic) float labelWidth;
@property(readonly, nonatomic) int parserType;
- (id)contentPatternText;
@property(readonly, nonatomic) UIFont *contentTextFont;
@property(readonly, nonatomic) NSString *contentText;
- (void)setHighlighted:(BOOL)arg1;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (struct CGSize)calculateTranslatedTextSize;
- (struct CGSize)calculateContentTextSize;
- (void)resetLayoutCache;
- (void)updateChatContact:(id)arg1;
- (id)cellDataForRow:(unsigned int)arg1;
- (int)numberOfRowsInSection;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)subViewModels;
- (BOOL)isLongSplitMessage;

@end

