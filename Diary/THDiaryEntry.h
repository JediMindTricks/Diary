//
//  THDiaryEntry.h
//  Diary
//
//  Created by Michael Bardwell-Scott on 10/12/14.
//  Copyright (c) 2014 BardwellTech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

//create an enumeration that represents the moods for the entry.
//THDiaryEntryMoodGood will be the default, since I'm setting it to zero.

NS_ENUM(int16_t, THDiaryEntryMood){
    THDiaryEntryMoodGood = 0,
    THDiaryEntryMoodAverage = 1,
    THDiaryEntryMoodBad = 2
};

@interface THDiaryEntry : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic) int16_t mood;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, readonly) NSString * sectionName;
@end
