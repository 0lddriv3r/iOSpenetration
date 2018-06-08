//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class FavoritesItem, MMUIImageView, UIButton, UILabel, UIView;

@interface FavDetailTagsView : MMUIView
{
    UILabel *m_label;
    UIButton *m_button;
    UIView *m_bottomLine;
    MMUIImageView *m_tagImg;
    FavoritesItem *m_favItem;
    id <FavTagViewDelegate> m_delegate;
}

+ (float)getFavDetailTagsHeight:(id)arg1;
@property(nonatomic) __weak id <FavTagViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem;
- (void).cxx_destruct;
- (void)labelUnHightlight:(id)arg1;
- (void)labelHightlight:(id)arg1;
- (void)labelTapped:(id)arg1;
- (void)updateByFavItem:(id)arg1;
- (void)updateTagLabel;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFavItem:(id)arg1;

@end

