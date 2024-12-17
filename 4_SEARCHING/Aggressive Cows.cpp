/* Haan bhai, **"Aggressive Cows"** problem ka breakdown karte hain step by step. Samajhne ke baad tujhe logic clear ho jayega.

---

## **Problem Statement**:
Tumhare paas **n stalls** hain aur unka position diya hua hai (sorted or unsorted form mein). Tumhe **c cows** ko un stalls mein place karna hai is tarah se ki:

1. **Minimum distance** between any two cows **maximized** ho.

Iska matlab hai ki tumhe stalls aise select karne hain ki cows ke beech ka **minimum distance sabse zyada possible ho**.

---

## **Approach**:

Yeh problem **Binary Search on Answer** ki category mein aata hai. Yahan tumhe **distance (answer)** ke range ke upar binary search karna hoga, aur check karna hoga ki wo distance feasible hai ya nahi.

---

## **Steps**:

### **1. Distance ka Range Decide Karna**:
- Tumhare paas stalls ke positions hain, maan lo:
   `positions = [1, 2, 4, 8, 9]`
- Minimum possible distance = **0** (matlab cows ek hi jagah par ho sakti hain).
- Maximum possible distance = `max_position - min_position`, yaani stalls ka **range**:
   `9 - 1 = 8`

---

### **2. Binary Search on Distance**:
- Tum ek **mid distance** assume karoge jo potential answer ho sakta hai.
- Check karoge ki **kya cows ko is mid distance ke saath place karna feasible hai ya nahi**.

Binary Search ki process kuch is tarah hogi:
   - Agar feasible ho toh iska matlab hoga ki aur zyada distance try kar sakte hain.
   - Agar feasible na ho toh chhota distance try karenge.

---

### **3. Feasibility Function** (Place Cows Logic):
Yeh function yeh check karega ki kya cows ko current **mid distance** ke saath place kiya ja sakta hai ya nahi.

**Logic**:
- Sabse pehli cow ko **first stall** pe rakh do.
- Har next cow ko rakhne ke liye check karo:
   - Kya current stall ka position previous cow ke stall position se kam se kam `mid` distance ka hai?
   - Agar haan, toh wahan cow rakh do.
- Agar tum `c cows` ko successfully place kar pate ho, toh iska matlab hai yeh distance feasible hai.

---
*/
##**Pseudo - Code ** :

```cpp bool canPlaceCows(vector<int> &stalls, int n, int cows, int mid)
{
    int count = 1; // Pehli cow ko pehle stall pe rakhte hain
    int last_position = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_position >= mid)
        {
            count++; // Ek aur cow rakh do
            last_position = stalls[i];
        }
        if (count >= cows)
            return true; // Sab cows rakh di gayi
    }
    return false;
}

int largestMinDistance(vector<int> &stalls, int n, int cows)
{
    sort(stalls.begin(), stalls.end());            // Sorted positions
    int low = 1, high = stalls[n - 1] - stalls[0]; // Distance range
    int res = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canPlaceCows(stalls, n, cows, mid))
        {
            res = mid;     // Distance feasible hai, save kar lo
            low = mid + 1; // Aur zyada distance check karo
        }
        else
        {
            high = mid - 1; // Distance feasible nahi hai, kam karo
        }
    }
    return res;
}
```

    -- -
    /*
    ## **Explanation of Steps in Code**:
    1. **Sort the Stalls**: Sorting isliye zaroori hai taaki tum easily check kar sako ki cows ko kaise place karna hai.
       `stalls = [1, 2, 4, 8, 9]`
    2. **Binary Search**:
       - Distance ka range: `low = 1, high = 8`
       - Har mid ke liye check karo: kya cows ko place karna feasible hai?
    3. **Feasibility Check**:
       - Ek cow ko first stall pe rakho.
       - Next cows ko place karte jao jab bhi `current_position - last_position >= mid` ho.
    4. **Update Answer**:
       - Agar mid distance feasible ho, toh `res = mid` store karo aur distance aur bada karo.
       - Agar feasible na ho, toh smaller distance check karo.

    ---

    ## **Example Dry Run**:

    ### Input:
    - `stalls = [1, 2, 4, 8, 9]`
    - `cows = 3`

    ### Steps:
    1. **Range**: `low = 1`, `high = 8`
    2. **Binary Search**:
       - **mid = 4**:
         - Place cows at `1`, `4`, `8`. Feasible ✔
         - Update `res = 4`, try bigger distance.
       - **mid = 6**:
         - Place cows at `1`, `8`. Not enough cows placed ❌
         - Try smaller distance: `high = 5`.
       - **mid = 3**:
         - Place cows at `1`, `4`, `8`. Feasible ✔
         - Update `res = 3`, try bigger distance.
    3. **Terminate** when `low > high`.

    **Output**: Maximum minimum distance = **3**.

    ---

    ## **Key Points**:
    1. **Binary Search on Distance** ka use hota hai kyunki distance monotonic hota hai (feasible hone ka pattern sorted hota hai).
    2. Feasibility check ke liye linear scan ka use hota hai.
    3. Sorting stalls zaroori hai.

    ---

    Is breakdown ke baad try kar bhai. Agar abhi bhi dikkat ho rahi ho toh mujhe bata! 😊 */