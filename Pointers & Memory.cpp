// Pointers & Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Book {
    string title{};
    int id{ 0 };
};


int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
        Book* inventory = new Book[100];

        inventory[0] = { "Beautiful Chaos", 1 };
        inventory[1] = { "Bewitching", 2 };
        inventory[2] = { "Curse of Arastold", 3 };
        inventory[3] = { "Dork Diaries: Tales from a Not-so-Fabulous Life", 4 };
        inventory[4] = { "Dork Diaries: Tales from a Not-so-Talented Pop Star", 5 };
        inventory[5] = { "Harry Potter and the Chamber of Secrets", 6 };
        inventory[6] = { "Legend", 7 };
        inventory[7] = { "Magic Treehouse Merlin Missions: Haunted Castle on Hallow's Eve", 8 };
        inventory[8] = { "Magic Treehouse Merlin Missions: Lepreuchaun in Late Winter", 9 };
        inventory[9] = { "Magic Treehouse: Polar Bear Past Midnight", 10 };
        inventory[10] = { "My First Puppy", 11 }; 
        inventory[11] = { "Once Bitten, Twice Dead", 12 };
        inventory[12] = { "Paranormalcy", 13 };
        inventory[13] = { "Pokemon Player Handbook", 14 };
        inventory[14] = { "Princess for Hire", 15 };
        inventory[15] = { "Silver Phoenix", 16 };
        inventory[16] = { "Spellbinding", 17 };
        inventory[17] = { "Succubus Heat", 18 };
        inventory[18] = { "The 39 Clues Cahill vs. Vespers: Day of Doom", 19 };
        inventory[19] = { "The 39 Clues Cahill vs. Vespers: Shatterproof", 20 };
        inventory[20] = { "The 39 Clues: Into the Gauntlet", 21 };
        inventory[21] = { "The Dead and Buried", 22 };
        inventory[22] = { "The Fairy Chronicles: Marigold and the Feather of Hope", 23 };
        inventory[23] = { "The Magic School Bus: A Science Chapter Book", 24 };
        inventory[24] = { "The Party Fairies: Cherry the Cake Fairy", 25 };
        inventory[25] = { "The Selection", 26 };
        inventory[26] = { "The Sister Switch", 27 };
        inventory[27] = { "The Undead Pool", 28 };
        inventory[28] = { "The Weather Fairies: Abigail the Breeze Fairy",29 };
        inventory[29] = { "The Weather Fairies: Crystal the Snow Fairy", 30 };
        inventory[30] = { "The Weather Fairies: Evie the Mist Fairy", 31 };
        inventory[31] = { "The Weather Fairies: Goldie the Sunshine Fairy", 32 };
        inventory[32] = { "The Weather Fairies: Hayley the Rain Fairy", 33 };
        inventory[33] = { "The Weather Fairies: Pearl the Cloud Fairy", 34 };
        inventory[34] = { "The Weather Fairies: Storm the Lightning Fairy", 35 };
        inventory[35] = { "Unearthly", 36 };
        inventory[36] = { "Maximum Ride Volume 6", 37 };
        inventory[37] = { "The Red Pyramid", 38 };
        inventory[38] = { "Didn't I Say to Make My Abilities Average in the Next Life?!", 39 };
        inventory[39] = { "In the Land of Leadale Volume 2", 40 };
        inventory[40] = { "Wotakoi: Love is Hard for Otaku Volume 3", 41 };
        inventory[41] = { "Wotakoi: Love is Hard for Otaku Volume 5", 42 };
        inventory[42] = { "Accomplishment of the Duke's Daughter Volume 6", 43 };
        inventory[43] = { "Black Butler Volume 19", 44 };
        inventory[44] = { "Crescent Moon Volume 2", 45 };
        inventory[45] = { "Hanger Volume 1", 46 };
        inventory[46] = { "He's My Onlu Vampire Volume 1", 47 };
        inventory[47] = { "Highschool Prodigies Have It Easy Even in Another World! Volume 6", 48 };
        inventory[48] = { "Highschool Prodigies Have it Easy Even in Another World! Volume 7", 49 };
        inventory[49] = { "Legal Drug Omnibus", 50 };
        inventory[50] = { "Liselotte & Witch's Forest Volume 1", 51 };
        inventory[51] = { "Log Horizon: The West Wind Brigade Volume 1-10", 52 };
        inventory[52] = { "Naruto 3-in-1 (Volume 7-9)", 53 };
        inventory[53] = { "Psyren Volume 2", 54 };
        inventory[54] = { "Tenshura: The Ways if the Monster Nation Volume 1", 55 };
        inventory[55] = { "Tenshura: Trinity in Tempest Volume 1", 56 };
        inventory[56] = { "Tenshura: Trinity in Tempest Volume 3", 57 };
        inventory[57] = { "The Demon Prince of Momochi House Volume 4", 58 };
        inventory[58] = { "The Earl and the Fairy Volume 1", 59 };
        inventory[59] = { "The Honor Student at Magic Highschool Volume 1-10", 60 };
        inventory[60] = { "Tsubasa Chronicles Volume 1", 61 };
        inventory[61] = { "Viz Media Manga Samp[ler 2015", 62 };
        inventory[62] = { "Yugioh! Zexal Volume 1", 63 };
        inventory[63] = { "Tian Guan Ci Fu Artbook", 64 };
        inventory[64] = { "Wotakoi: Love is Hard for Otaku Artbook", 65 };
        inventory[65] = { "A Strange and Mystifying Story Volume 3", 66 };
        inventory[66] = { "Drug and Drop Volume 1", 67 };
        inventory[67] = { "Tales of Heaven", 68 };
        inventory[68] = { "Ten Count Volume 2", 69 };
        inventory[69] = { "Ten Count Volume 3", 70 };
        inventory[70] = { "The Dragon's Betrothed Volume 1", 71 };
        inventory[71] = { "Sasaki and Miyano: Second-Years", 72 };
        inventory[72] = { "The Husky and His White Cat Shizun Volume 1", 73 };
        inventory[73] = { "The Husky and His White Cat Shizun Volume 2", 74 };
        inventory[74] = { "Mo Dao Zu Shi Volume 1", 75 };
        inventory[75] = { "Mo Dao Zu Shi Volume 2", 76 };
        inventory[76] = { "Qian Qiu Volume 1", 77 };
        inventory[77] = { "Tian Guan Ci Fu Volume 1-7", 78 };
        inventory[78] = { "How to Conquer Monster Girls", 79 };
        inventory[79] = { "Highschool Boys TRapped in a Fantasy World Volume 1", 80 };
        inventory[80] = { "Hyperdrive", 81 };
        inventory[81] = {"Sphynx", 82 };
        inventory[82] = { "Under the Suits", 83 };
        inventory[83] = { "The Ancient Magus' Bride", 84 };
        inventory[84] = { "7th Time Loop: The Villainess Enjoys a Carefree Life Married to Her Worst Enemy!", 85 };
        inventory[85] = { "No Game No Life", 86 };
        inventory[86] = { "Frieren", 87 };
        inventory[87] = { "How a Realist Hero Rebuilt the Kingdom", 88 };
        inventory[88] = { "My Isekai Life: I Gained a Second Character Class and Became the Strongest Sage in the World!", 89 };
        inventory[89] = { "Given", 90 };
        inventory[90] = { "The World's Finest Assassin Gets Reincarnated in Another World as an Aristocrat", 91 };
        inventory[91] = { "By the Grace of the Gods", 92 };
        inventory[92] = { "Parallel World Pharmacy", 93 };
        inventory[93] = { "Faraway Paladin", 94 };
        inventory[94] = { "The Wife is First", 95 };
        inventory[95] = { "FOG, E-sports", 96 };
        inventory[96] = { "May I Ask for One Final Thing?", 97 };
        inventory[97] = { "Global Examination", 98 };
        inventory[98] = { "Jealous in Nature", 99 };
        inventory[99] = { "The Reason Raeliana is at the Duke's Mansion", 100 };
            
        int ids[100];
        for (int i = 0; i < 100; i++) {
            ids[i] = inventory[i].id;

        }

        int targetId;
        cout << "Enter the book ID to search: ";
        cin >> targetId;

        int result = binarySearch(ids, 100, targetId);
        if (result != -1) {
            cout << "Book found: " << inventory[result].title << endl;

        }
        else {
            cout << "Book not found." << endl;
        }

        delete[] inventory;

          return 0;
    } 

