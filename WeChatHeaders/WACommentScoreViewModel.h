//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WACommentScoreViewModel : MMObject
{
    BOOL _canEdit;
    BOOL _showWhenZero;
    BOOL _bPostScene;
    unsigned long _score;
    float _itemSpacing;
    unsigned long _itemCount;
    struct CGSize _itemSize;
}

@property(nonatomic) BOOL bPostScene; // @synthesize bPostScene=_bPostScene;
@property(nonatomic) BOOL showWhenZero; // @synthesize showWhenZero=_showWhenZero;
@property(nonatomic) unsigned long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) float itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) BOOL canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) unsigned long score; // @synthesize score=_score;
- (struct CGSize)getScoreViewSize;

@end

