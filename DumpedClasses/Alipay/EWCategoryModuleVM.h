//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseViewModel.h"

@class EWCategoryViewModel, NSMutableArray;

@interface EWCategoryModuleVM : EWBaseViewModel
{
    EWCategoryViewModel *_selectedCategory;
    NSMutableArray *_categoryList;
    double _subCategoryGroupHeight;
}

@property(nonatomic) double subCategoryGroupHeight; // @synthesize subCategoryGroupHeight=_subCategoryGroupHeight;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) EWCategoryViewModel *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
- (void).cxx_destruct;
- (id)init;

@end

