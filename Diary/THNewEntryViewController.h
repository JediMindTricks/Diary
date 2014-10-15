//
//  THNewEntryViewController.h
//  Diary
//
//  Created by Michael Bardwell-Scott on 10/12/14.
//  Copyright (c) 2014 BardwellTech. All rights reserved.
//

#import <UIKit/UIKit.h>
@class THDiaryEntry;

@interface THNewEntryViewController : UIViewController


@property (nonatomic, strong) THDiaryEntry * entry;
@property (weak, nonatomic) IBOutlet UITextView * textView;


@end
